// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/dynamicany/DynAnyImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCONSTRUCTEDIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCONSTRUCTEDIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::dynamicany { class DynAnyConstructedImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynAnyConstructedImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/dynamicany/DynAnyConstructedImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::dynamicany::DynAnyImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCONSTRUCTEDIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCONSTRUCTEDIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCONSTRUCTEDIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/DynamicAny/DynAny.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::dynamicany::DynAnyConstructedImpl : public jni::object_base<"com/sun/corba/se/impl/dynamicany/DynAnyConstructedImpl",
	com::sun::corba::se::impl::dynamicany::DynAnyImpl>
{
public:

	jni::ref<org::omg::DynamicAny::DynAny> current_component() { return call_method<"current_component", jni::ref<org::omg::DynamicAny::DynAny>>(); }
	jint component_count() { return call_method<"component_count", jint>(); }
	jboolean next() { return call_method<"next", jboolean>(); }
	jboolean seek(jint p1) { return call_method<"seek", jboolean>(p1); }
	void rewind() { return call_method<"rewind", void>(); }
	void assign(jni::ref<org::omg::DynamicAny::DynAny> p1) { return call_method<"assign", void>(p1); }
	void from_any(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"from_any", void>(p1); }
	jni::ref<org::omg::CORBA::Any> to_any() { return call_method<"to_any", jni::ref<org::omg::CORBA::Any>>(); }
	jboolean equal(jni::ref<org::omg::DynamicAny::DynAny> p1) { return call_method<"equal", jboolean>(p1); }
	void destroy() { return call_method<"destroy", void>(); }
	jni::ref<org::omg::DynamicAny::DynAny> copy() { return call_method<"copy", jni::ref<org::omg::DynamicAny::DynAny>>(); }
	void insert_boolean(jboolean p1) { return call_method<"insert_boolean", void>(p1); }
	void insert_octet(jbyte p1) { return call_method<"insert_octet", void>(p1); }
	void insert_char(jchar p1) { return call_method<"insert_char", void>(p1); }
	void insert_short(jshort p1) { return call_method<"insert_short", void>(p1); }
	void insert_ushort(jshort p1) { return call_method<"insert_ushort", void>(p1); }
	void insert_long(jint p1) { return call_method<"insert_long", void>(p1); }
	void insert_ulong(jint p1) { return call_method<"insert_ulong", void>(p1); }
	void insert_float(jfloat p1) { return call_method<"insert_float", void>(p1); }
	void insert_double(jdouble p1) { return call_method<"insert_double", void>(p1); }
	void insert_string(jni::ref<java::lang::String> p1) { return call_method<"insert_string", void>(p1); }
	void insert_reference(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"insert_reference", void>(p1); }
	void insert_typecode(jni::ref<org::omg::CORBA::TypeCode> p1) { return call_method<"insert_typecode", void>(p1); }
	void insert_longlong(jlong p1) { return call_method<"insert_longlong", void>(p1); }
	void insert_ulonglong(jlong p1) { return call_method<"insert_ulonglong", void>(p1); }
	void insert_wchar(jchar p1) { return call_method<"insert_wchar", void>(p1); }
	void insert_wstring(jni::ref<java::lang::String> p1) { return call_method<"insert_wstring", void>(p1); }
	void insert_any(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"insert_any", void>(p1); }
	void insert_dyn_any(jni::ref<org::omg::DynamicAny::DynAny> p1) { return call_method<"insert_dyn_any", void>(p1); }
	void insert_val(jni::ref<java::io::Serializable> p1) { return call_method<"insert_val", void>(p1); }
	jni::ref<java::io::Serializable> get_val() { return call_method<"get_val", jni::ref<java::io::Serializable>>(); }
	jboolean get_boolean() { return call_method<"get_boolean", jboolean>(); }
	jbyte get_octet() { return call_method<"get_octet", jbyte>(); }
	jchar get_char() { return call_method<"get_char", jchar>(); }
	jshort get_short() { return call_method<"get_short", jshort>(); }
	jshort get_ushort() { return call_method<"get_ushort", jshort>(); }
	jint get_long() { return call_method<"get_long", jint>(); }
	jint get_ulong() { return call_method<"get_ulong", jint>(); }
	jfloat get_float() { return call_method<"get_float", jfloat>(); }
	jdouble get_double() { return call_method<"get_double", jdouble>(); }
	jni::ref<java::lang::String> get_string() { return call_method<"get_string", jni::ref<java::lang::String>>(); }
	jni::ref<org::omg::CORBA::Object> get_reference() { return call_method<"get_reference", jni::ref<org::omg::CORBA::Object>>(); }
	jni::ref<org::omg::CORBA::TypeCode> get_typecode() { return call_method<"get_typecode", jni::ref<org::omg::CORBA::TypeCode>>(); }
	jlong get_longlong() { return call_method<"get_longlong", jlong>(); }
	jlong get_ulonglong() { return call_method<"get_ulonglong", jlong>(); }
	jchar get_wchar() { return call_method<"get_wchar", jchar>(); }
	jni::ref<java::lang::String> get_wstring() { return call_method<"get_wstring", jni::ref<java::lang::String>>(); }
	jni::ref<org::omg::CORBA::Any> get_any() { return call_method<"get_any", jni::ref<org::omg::CORBA::Any>>(); }
	jni::ref<org::omg::DynamicAny::DynAny> get_dyn_any() { return call_method<"get_dyn_any", jni::ref<org::omg::DynamicAny::DynAny>>(); }

protected:

	DynAnyConstructedImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_DYNAMICANY_DYNANYCONSTRUCTEDIMPL