// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSDEFAULTS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSDEFAULTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class NimbusDefaults; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::NimbusDefaults>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/NimbusDefaults";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSDEFAULTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSDEFAULTS)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSDEFAULTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/nimbus/DerivedColor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::nimbus::NimbusDefaults : public jni::object_base<"javax/swing/plaf/nimbus/NimbusDefaults",
	java::lang::Object>
{
public:

	void clearOverridesCache(jni::ref<javax::swing::JComponent> p1) { return call_method<"clearOverridesCache", void>(p1); }
	jni::ref<javax::swing::plaf::nimbus::DerivedColor> getDerivedColor(jni::ref<java::lang::String> p1, jfloat p2, jfloat p3, jfloat p4, jint p5, jboolean p6) { return call_method<"getDerivedColor", jni::ref<javax::swing::plaf::nimbus::DerivedColor>>(p1, p2, p3, p4, p5, p6); }

protected:

	NimbusDefaults(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSDEFAULTS