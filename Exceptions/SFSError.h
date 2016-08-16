// ===================================================================
//
// Description		
//		Contains the definition of SFSError
//
// Revision history
//		Date			Description
//		30-Nov-2012		First version
//
// ===================================================================
#ifndef __SFSError__
#define __SFSError__

#include <boost/exception/exception.hpp>	// Boost exception
#include <boost/shared_ptr.hpp>				// Boost Asio shared pointer

#if defined(_MSC_VER)
#pragma warning(disable:4786)			// STL library: disable warning 4786; this warning is generated due to a Microsoft bug
#endif
#include <string>						// STL library: string object
using namespace std;					// STL library: declare the STL namespace

namespace Sfs2X {
namespace Exceptions {

	// ------------------------------------------------------------------- 
	// Class SFSError
	// -------------------------------------------------------------------
	class SFSError : public boost::exception
	{
	public:

		// -------------------------------------------------------------------
		// Public methods
		// -------------------------------------------------------------------

		SFSError(boost::shared_ptr<string> message);
		const char* what() { return message.get()->c_str();}
		boost::shared_ptr<string> Message() {return message;};
		~SFSError() throw () {};

		// -------------------------------------------------------------------
		// Public members
		// -------------------------------------------------------------------

	protected:

		// -------------------------------------------------------------------
		// Protected methods
		// -------------------------------------------------------------------

		// -------------------------------------------------------------------
		// Protected members
		// -------------------------------------------------------------------

	private:

		// -------------------------------------------------------------------
		// Private methods
		// -------------------------------------------------------------------

		// -------------------------------------------------------------------
		// Private members
		// -------------------------------------------------------------------

		boost::shared_ptr<string> message;
	};

}	// namespace Exceptions
}	// namespace Sfs2X

#endif
