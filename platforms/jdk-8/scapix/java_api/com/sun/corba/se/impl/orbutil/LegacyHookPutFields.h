// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectOutputStream_PutField.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_LEGACYHOOKPUTFIELDS_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_LEGACYHOOKPUTFIELDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil { class LegacyHookPutFields; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::LegacyHookPutFields>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/LegacyHookPutFields";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectOutputStream_PutField>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_LEGACYHOOKPUTFIELDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_LEGACYHOOKPUTFIELDS)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_LEGACYHOOKPUTFIELDS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::orbutil::LegacyHookPutFields : public jni::object_base<"com/sun/corba/se/impl/orbutil/LegacyHookPutFields",
	java::io::ObjectOutputStream_PutField>
{
public:

	void put(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jchar p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jbyte p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jshort p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jint p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jfloat p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jdouble p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", void>(p1, p2); }
	void write(jni::ref<java::io::ObjectOutput> p1) { return call_method<"write", void>(p1); }

protected:

	LegacyHookPutFields(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_LEGACYHOOKPUTFIELDS