// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicTransferable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FILETRANSFERHANDLER_FILETRANSFERABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FILETRANSFERHANDLER_FILETRANSFERABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicFileChooserUI_FileTransferHandler_FileTransferable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicFileChooserUI_FileTransferHandler_FileTransferable>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler$FileTransferable";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicTransferable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FILETRANSFERHANDLER_FILETRANSFERABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FILETRANSFERHANDLER_FILETRANSFERABLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FILETRANSFERHANDLER_FILETRANSFERABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicFileChooserUI_FileTransferHandler_FileTransferable : public jni::object_base<"javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler$FileTransferable",
	javax::swing::plaf::basic::BasicTransferable>
{
public:


protected:

	BasicFileChooserUI_FileTransferHandler_FileTransferable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FILETRANSFERHANDLER_FILETRANSFERABLE
