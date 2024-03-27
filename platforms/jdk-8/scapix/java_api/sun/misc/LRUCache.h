// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_LRUCACHE_FWD
#define SCAPIX_JAVA_API_SUN_MISC_LRUCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class LRUCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::LRUCache>
{
	static constexpr fixed_string class_name = "sun/misc/LRUCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_LRUCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_LRUCACHE)
#define SCAPIX_JAVA_API_SUN_MISC_LRUCACHE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::LRUCache : public jni::object_base<"sun/misc/LRUCache",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::LRUCache> new_object(jint p1) { return base_::new_object(p1); }
	static void moveToFront(jni::ref<jni::array<java::lang::Object>> p1, jint p2) { return call_static_method<"moveToFront", void>(p1, p2); }
	jni::ref<java::lang::Object> forName(jni::ref<java::lang::Object> p1) { return call_method<"forName", jni::ref<java::lang::Object>>(p1); }

protected:

	LRUCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_LRUCACHE