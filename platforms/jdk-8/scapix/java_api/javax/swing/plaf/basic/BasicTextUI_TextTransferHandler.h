// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/TransferHandler.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTextUI_TextTransferHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTextUI_TextTransferHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTextUI$TextTransferHandler";
	using base_classes = std::tuple<scapix::java_api::javax::swing::TransferHandler, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/DataFlavor.h>
#include <scapix/java_api/java/awt/datatransfer/Transferable.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/TransferHandler_TransferSupport.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTextUI_TextTransferHandler : public jni::object_base<"javax/swing/plaf/basic/BasicTextUI$TextTransferHandler",
	javax::swing::TransferHandler,
	javax::swing::plaf::UIResource>
{
public:

	jint getSourceActions(jni::ref<javax::swing::JComponent> p1) { return call_method<"getSourceActions", jint>(p1); }
	jboolean importData(jni::ref<javax::swing::TransferHandler_TransferSupport> p1) { return call_method<"importData", jboolean>(p1); }
	jboolean importData(jni::ref<javax::swing::JComponent> p1, jni::ref<java::awt::datatransfer::Transferable> p2) { return call_method<"importData", jboolean>(p1, p2); }
	jboolean canImport(jni::ref<javax::swing::JComponent> p1, jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> p2) { return call_method<"canImport", jboolean>(p1, p2); }

protected:

	BasicTextUI_TextTransferHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTUI_TEXTTRANSFERHANDLER
