// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/swing/UIAction.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_TRANSFERACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_TRANSFERACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class TransferHandler_TransferAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::TransferHandler_TransferAction>
{
	static constexpr fixed_string class_name = "javax/swing/TransferHandler$TransferAction";
	using base_classes = std::tuple<scapix::java_api::sun::swing::UIAction, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_TRANSFERACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_TRANSFERACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_TRANSFERACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::TransferHandler_TransferAction : public jni::object_base<"javax/swing/TransferHandler$TransferAction",
	sun::swing::UIAction,
	javax::swing::plaf::UIResource>
{
public:

	jboolean isEnabled(jni::ref<java::lang::Object> p1) { return call_method<"isEnabled", jboolean>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	TransferHandler_TransferAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_TRANSFERACTION
