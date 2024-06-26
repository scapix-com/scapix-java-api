// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Dictionary.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_IDENTITYHASHTABLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_IDENTITYHASHTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::util { class IdentityHashtable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::util::IdentityHashtable>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/util/IdentityHashtable";
	using base_classes = std::tuple<scapix::java_api::java::util::Dictionary>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_IDENTITYHASHTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_IDENTITYHASHTABLE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_IDENTITYHASHTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::util::IdentityHashtable : public jni::object_base<"com/sun/corba/se/impl/util/IdentityHashtable",
	java::util::Dictionary>
{
public:

	static jni::ref<com::sun::corba::se::impl::util::IdentityHashtable> new_object(jint p1, jfloat p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::corba::se::impl::util::IdentityHashtable> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::util::IdentityHashtable> new_object() { return base_::new_object(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::Enumeration> keys() { return call_method<"keys", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	IdentityHashtable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_IDENTITYHASHTABLE
