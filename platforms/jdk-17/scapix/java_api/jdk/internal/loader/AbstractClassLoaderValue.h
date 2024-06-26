// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_ABSTRACTCLASSLOADERVALUE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_ABSTRACTCLASSLOADERVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class AbstractClassLoaderValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::AbstractClassLoaderValue>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/AbstractClassLoaderValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_ABSTRACTCLASSLOADERVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_ABSTRACTCLASSLOADERVALUE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_ABSTRACTCLASSLOADERVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/jdk/internal/loader/AbstractClassLoaderValue_Sub.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::loader::AbstractClassLoaderValue : public jni::object_base<"jdk/internal/loader/AbstractClassLoaderValue",
	java::lang::Object>
{
public:

	using Sub = AbstractClassLoaderValue_Sub;

	jni::ref<java::lang::Object> key() { return call_method<"key", jni::ref<java::lang::Object>>(); }
	jni::ref<jdk::internal::loader::AbstractClassLoaderValue_Sub> sub(jni::ref<java::lang::Object> key) { return call_method<"sub", jni::ref<jdk::internal::loader::AbstractClassLoaderValue_Sub>>(key); }
	jboolean isEqualOrDescendantOf(jni::ref<jdk::internal::loader::AbstractClassLoaderValue> p1) { return call_method<"isEqualOrDescendantOf", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::ClassLoader> cl) { return call_method<"get", jni::ref<java::lang::Object>>(cl); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::ClassLoader> cl, jni::ref<java::lang::Object> v) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(cl, v); }
	jboolean remove(jni::ref<java::lang::ClassLoader> cl, jni::ref<java::lang::Object> v) { return call_method<"remove", jboolean>(cl, v); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::ClassLoader> cl, jni::ref<java::util::function::BiFunction> mappingFunction) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(cl, mappingFunction); }
	void removeAll(jni::ref<java::lang::ClassLoader> cl) { return call_method<"removeAll", void>(cl); }

protected:

	AbstractClassLoaderValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_ABSTRACTCLASSLOADERVALUE
