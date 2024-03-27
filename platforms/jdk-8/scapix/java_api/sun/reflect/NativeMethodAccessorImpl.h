// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/MethodAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_NATIVEMETHODACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_NATIVEMETHODACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class NativeMethodAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::NativeMethodAccessorImpl>
{
	static constexpr fixed_string class_name = "sun/reflect/NativeMethodAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::MethodAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_NATIVEMETHODACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_NATIVEMETHODACCESSORIMPL)
#define SCAPIX_JAVA_API_SUN_REFLECT_NATIVEMETHODACCESSORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::NativeMethodAccessorImpl : public jni::object_base<"sun/reflect/NativeMethodAccessorImpl",
	sun::reflect::MethodAccessorImpl>
{
public:

	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	NativeMethodAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_NATIVEMETHODACCESSORIMPL