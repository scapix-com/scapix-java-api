// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_PAIR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_PAIR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class WeakPairMap_Pair; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::WeakPairMap_Pair>
{
	static constexpr fixed_string class_name = "java/lang/WeakPairMap$Pair";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_PAIR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_PAIR)
#define SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_PAIR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ref/ReferenceQueue.h>
#include <scapix/java_api/java/lang/WeakPairMap_Pair_Weak.h>
#include <scapix/java_api/java/lang/WeakPairMap_Pair_Lookup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::WeakPairMap_Pair : public jni::object_base<"java/lang/WeakPairMap$Pair",
	java::lang::Object>
{
public:

	using Weak = WeakPairMap_Pair_Weak;
	using Lookup = WeakPairMap_Pair_Lookup;

	static jni::ref<java::lang::WeakPairMap_Pair> weak(jni::ref<java::lang::Object> k1, jni::ref<java::lang::Object> k2, jni::ref<java::lang::ref::ReferenceQueue> queue) { return call_static_method<"weak", jni::ref<java::lang::WeakPairMap_Pair>>(k1, k2, queue); }
	static jni::ref<java::lang::WeakPairMap_Pair> lookup(jni::ref<java::lang::Object> k1, jni::ref<java::lang::Object> k2) { return call_static_method<"lookup", jni::ref<java::lang::WeakPairMap_Pair>>(k1, k2); }
	jni::ref<java::lang::Object> first() { return call_method<"first", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> second() { return call_method<"second", jni::ref<java::lang::Object>>(); }
	static jint hashCode(jni::ref<java::lang::Object> first, jni::ref<java::lang::Object> second) { return call_static_method<"hashCode", jint>(first, second); }
	static jboolean equals(jni::ref<java::lang::Object> first, jni::ref<java::lang::Object> second, jni::ref<java::lang::WeakPairMap_Pair> p) { return call_static_method<"equals", jboolean>(first, second, p); }

protected:

	WeakPairMap_Pair(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_WEAKPAIRMAP_PAIR