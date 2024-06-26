// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_METHODACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_METHODACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class MethodAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::MethodAccessor>
{
	static constexpr fixed_string class_name = "sun/reflect/MethodAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_METHODACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_METHODACCESSOR)
#define SCAPIX_JAVA_API_SUN_REFLECT_METHODACCESSOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::MethodAccessor : public jni::object_base<"sun/reflect/MethodAccessor",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	MethodAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_METHODACCESSOR
