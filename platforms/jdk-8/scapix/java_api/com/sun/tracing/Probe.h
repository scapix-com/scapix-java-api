// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_TRACING_PROBE_FWD
#define SCAPIX_JAVA_API_COM_SUN_TRACING_PROBE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::tracing { class Probe; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::tracing::Probe>
{
	static constexpr fixed_string class_name = "com/sun/tracing/Probe";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_TRACING_PROBE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_TRACING_PROBE)
#define SCAPIX_JAVA_API_COM_SUN_TRACING_PROBE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::tracing::Probe : public jni::object_base<"com/sun/tracing/Probe",
	java::lang::Object>
{
public:

	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void trigger(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"trigger", void>(p1); }

protected:

	Probe(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_TRACING_PROBE
