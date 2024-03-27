// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/AbstractConstantGroup.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_WITHCACHE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_WITHCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class AbstractConstantGroup_WithCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::AbstractConstantGroup_WithCache>
{
	static constexpr fixed_string class_name = "java/lang/invoke/AbstractConstantGroup$WithCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::AbstractConstantGroup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_WITHCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_WITHCACHE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_WITHCACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::AbstractConstantGroup_WithCache : public jni::object_base<"java/lang/invoke/AbstractConstantGroup$WithCache",
	java::lang::invoke::AbstractConstantGroup>
{
public:

	jni::ref<java::lang::Object> get(jint i) { return call_method<"get", jni::ref<java::lang::Object>>(i); }
	jni::ref<java::lang::Object> get(jint i, jni::ref<java::lang::Object> ifNotAvailable) { return call_method<"get", jni::ref<java::lang::Object>>(i, ifNotAvailable); }
	jboolean isPresent(jint i) { return call_method<"isPresent", jboolean>(i); }

protected:

	AbstractConstantGroup_WithCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_WITHCACHE