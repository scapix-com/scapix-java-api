// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Enumeration.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_CACHEENUMERATOR_FWD
#define SCAPIX_JAVA_API_SUN_MISC_CACHEENUMERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class CacheEnumerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::CacheEnumerator>
{
	static constexpr fixed_string class_name = "sun/misc/CacheEnumerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Enumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_CACHEENUMERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_CACHEENUMERATOR)
#define SCAPIX_JAVA_API_SUN_MISC_CACHEENUMERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::CacheEnumerator : public jni::object_base<"sun/misc/CacheEnumerator",
	java::lang::Object,
	java::util::Enumeration>
{
public:

	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<java::lang::Object> nextElement() { return call_method<"nextElement", jni::ref<java::lang::Object>>(); }

protected:

	CacheEnumerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_CACHEENUMERATOR
