// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLOOKANDFEEL_AATEXTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLOOKANDFEEL_AATEXTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalLookAndFeel_AATextListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalLookAndFeel_AATextListener>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalLookAndFeel$AATextListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLOOKANDFEEL_AATEXTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLOOKANDFEEL_AATEXTLISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLOOKANDFEEL_AATEXTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::metal::MetalLookAndFeel_AATextListener : public jni::object_base<"javax/swing/plaf/metal/MetalLookAndFeel$AATextListener",
	java::lang::ref::WeakReference,
	java::beans::PropertyChangeListener>
{
public:

	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }

protected:

	MetalLookAndFeel_AATextListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLOOKANDFEEL_AATEXTLISTENER
