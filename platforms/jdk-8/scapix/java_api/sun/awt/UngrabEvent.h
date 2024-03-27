// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTEvent.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_UNGRABEVENT_FWD
#define SCAPIX_JAVA_API_SUN_AWT_UNGRABEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class UngrabEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::UngrabEvent>
{
	static constexpr fixed_string class_name = "sun/awt/UngrabEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_UNGRABEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_UNGRABEVENT)
#define SCAPIX_JAVA_API_SUN_AWT_UNGRABEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::UngrabEvent : public jni::object_base<"sun/awt/UngrabEvent",
	java::awt::AWTEvent>
{
public:

	static jni::ref<sun::awt::UngrabEvent> new_object(jni::ref<java::awt::Component> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	UngrabEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_UNGRABEVENT
