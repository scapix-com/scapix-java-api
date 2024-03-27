// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/TransferHandler.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICLISTUI_LISTTRANSFERHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICLISTUI_LISTTRANSFERHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicListUI_ListTransferHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicListUI_ListTransferHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicListUI$ListTransferHandler";
	using base_classes = std::tuple<scapix::java_api::javax::swing::TransferHandler, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICLISTUI_LISTTRANSFERHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICLISTUI_LISTTRANSFERHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICLISTUI_LISTTRANSFERHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicListUI_ListTransferHandler : public jni::object_base<"javax/swing/plaf/basic/BasicListUI$ListTransferHandler",
	javax::swing::TransferHandler,
	javax::swing::plaf::UIResource>
{
public:

	jint getSourceActions(jni::ref<javax::swing::JComponent> p1) { return call_method<"getSourceActions", jint>(p1); }

protected:

	BasicListUI_ListTransferHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICLISTUI_LISTTRANSFERHANDLER
