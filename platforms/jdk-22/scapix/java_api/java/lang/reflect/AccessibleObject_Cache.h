// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_CACHE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_CACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class AccessibleObject_Cache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::AccessibleObject_Cache>
{
	static constexpr fixed_string class_name = "java/lang/reflect/AccessibleObject$Cache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_CACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_CACHE)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_CACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::AccessibleObject_Cache : public jni::object_base<"java/lang/reflect/AccessibleObject$Cache",
	java::lang::Object>
{
public:


protected:

	AccessibleObject_Cache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_ACCESSIBLEOBJECT_CACHE
