// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class WeakPairMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::WeakPairMap>
{
	static constexpr fixed_string class_name = "java/lang/WeakPairMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP)
#define SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::WeakPairMap : public jni::object_base<"java/lang/WeakPairMap",
	java::lang::Object>
{
public:

	jboolean containsKeyPair(jni::ref<java::lang::Object> k1, jni::ref<java::lang::Object> k2) { return call_method<"containsKeyPair", jboolean>(k1, k2); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> k1, jni::ref<java::lang::Object> k2) { return call_method<"get", jni::ref<java::lang::Object>>(k1, k2); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> k1, jni::ref<java::lang::Object> k2, jni::ref<java::lang::Object> v) { return call_method<"put", jni::ref<java::lang::Object>>(k1, k2, v); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::Object> k1, jni::ref<java::lang::Object> k2, jni::ref<java::lang::Object> v) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(k1, k2, v); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::Object> k1, jni::ref<java::lang::Object> k2, jni::ref<java::util::function::BiFunction> mappingFunction) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(k1, k2, mappingFunction); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }

protected:

	WeakPairMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP
