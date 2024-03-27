// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractSet.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_REFERENCEDKEYSET_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_REFERENCEDKEYSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util { class ReferencedKeySet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::ReferencedKeySet>
{
	static constexpr fixed_string class_name = "jdk/internal/util/ReferencedKeySet";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_REFERENCEDKEYSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_REFERENCEDKEYSET)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_REFERENCEDKEYSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/function/UnaryOperator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::ReferencedKeySet : public jni::object_base<"jdk/internal/util/ReferencedKeySet",
	java::util::AbstractSet>
{
public:

	static jni::ref<jdk::internal::util::ReferencedKeySet> create(jboolean isSoft, jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"create", jni::ref<jdk::internal::util::ReferencedKeySet>>(isSoft, supplier); }
	static jni::ref<jdk::internal::util::ReferencedKeySet> create(jboolean isSoft, jboolean useNativeQueue, jni::ref<java::util::function::Supplier> supplier) { return call_static_method<"create", jni::ref<jdk::internal::util::ReferencedKeySet>>(isSoft, useNativeQueue, supplier); }
	void removeStaleReferences() { return call_method<"removeStaleReferences", void>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean contains(jni::ref<java::lang::Object> o) { return call_method<"contains", jboolean>(o); }
	jboolean add(jni::ref<java::lang::Object> e) { return call_method<"add", jboolean>(e); }
	jboolean remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jboolean>(o); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> e) { return call_method<"get", jni::ref<java::lang::Object>>(e); }
	jni::ref<java::lang::Object> intern(jni::ref<java::lang::Object> e) { return call_method<"intern", jni::ref<java::lang::Object>>(e); }
	jni::ref<java::lang::Object> intern(jni::ref<java::lang::Object> e, jni::ref<java::util::function::UnaryOperator> interner) { return call_method<"intern", jni::ref<java::lang::Object>>(e, interner); }

protected:

	ReferencedKeySet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_REFERENCEDKEYSET