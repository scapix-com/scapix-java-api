// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_UNMARSHAL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_UNMARSHAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::internal { class Unmarshal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::internal::Unmarshal>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/internal/Unmarshal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_UNMARSHAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_UNMARSHAL)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_UNMARSHAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/MarshalledObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::remote::internal::Unmarshal : public jni::object_base<"com/sun/jmx/remote/internal/Unmarshal",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> get(jni::ref<java::rmi::MarshalledObject> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }

protected:

	Unmarshal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_UNMARSHAL
