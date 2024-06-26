// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/TransferHandler.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_JTEXTCOMPONENT_DEFAULTTRANSFERHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_JTEXTCOMPONENT_DEFAULTTRANSFERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class JTextComponent_DefaultTransferHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::JTextComponent_DefaultTransferHandler>
{
	static constexpr fixed_string class_name = "javax/swing/text/JTextComponent$DefaultTransferHandler";
	using base_classes = std::tuple<scapix::java_api::javax::swing::TransferHandler, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_JTEXTCOMPONENT_DEFAULTTRANSFERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_JTEXTCOMPONENT_DEFAULTTRANSFERHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_JTEXTCOMPONENT_DEFAULTTRANSFERHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/Clipboard.h>
#include <scapix/java_api/java/awt/datatransfer/DataFlavor.h>
#include <scapix/java_api/java/awt/datatransfer/Transferable.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::JTextComponent_DefaultTransferHandler : public jni::object_base<"javax/swing/text/JTextComponent$DefaultTransferHandler",
	javax::swing::TransferHandler,
	javax::swing::plaf::UIResource>
{
public:

	void exportToClipboard(jni::ref<javax::swing::JComponent> p1, jni::ref<java::awt::datatransfer::Clipboard> p2, jint p3) { return call_method<"exportToClipboard", void>(p1, p2, p3); }
	jboolean importData(jni::ref<javax::swing::JComponent> p1, jni::ref<java::awt::datatransfer::Transferable> p2) { return call_method<"importData", jboolean>(p1, p2); }
	jboolean canImport(jni::ref<javax::swing::JComponent> p1, jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> p2) { return call_method<"canImport", jboolean>(p1, p2); }
	jint getSourceActions(jni::ref<javax::swing::JComponent> p1) { return call_method<"getSourceActions", jint>(p1); }

protected:

	JTextComponent_DefaultTransferHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_JTEXTCOMPONENT_DEFAULTTRANSFERHANDLER
