// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/WeakReference.h>
#include <scapix/java_api/java/lang/runtime/ReferenceKey.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_WEAKREFERENCEKEY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_WEAKREFERENCEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::runtime { class WeakReferenceKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::runtime::WeakReferenceKey>
{
	static constexpr fixed_string class_name = "java/lang/runtime/WeakReferenceKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::WeakReference, scapix::java_api::java::lang::runtime::ReferenceKey>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_WEAKREFERENCEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_WEAKREFERENCEKEY)
#define SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_WEAKREFERENCEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::runtime::WeakReferenceKey : public jni::object_base<"java/lang/runtime/WeakReferenceKey",
	java::lang::ref::WeakReference,
	java::lang::runtime::ReferenceKey>
{
public:

	void unused() { return call_method<"unused", void>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	WeakReferenceKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_RUNTIME_WEAKREFERENCEKEY
