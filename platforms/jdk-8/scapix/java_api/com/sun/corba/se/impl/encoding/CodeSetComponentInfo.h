// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CODESETCOMPONENTINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CODESETCOMPONENTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class CodeSetComponentInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::CodeSetComponentInfo>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/CodeSetComponentInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CODESETCOMPONENTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CODESETCOMPONENTINFO)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CODESETCOMPONENTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/encoding/CodeSetComponentInfo_CodeSetComponent.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/CodeSetComponentInfo_CodeSetContext.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/MarshalInputStream.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/MarshalOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::encoding::CodeSetComponentInfo : public jni::object_base<"com/sun/corba/se/impl/encoding/CodeSetComponentInfo",
	java::lang::Object>
{
public:

	using CodeSetComponent = CodeSetComponentInfo_CodeSetComponent;
	using CodeSetContext = CodeSetComponentInfo_CodeSetContext;

	static jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo> JAVASOFT_DEFAULT_CODESETS() { return get_static_field<"JAVASOFT_DEFAULT_CODESETS", jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo>>(); }
	static jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetContext> LOCAL_CODE_SETS() { return get_static_field<"LOCAL_CODE_SETS", jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetContext>>(); }

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo> new_object(jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent> p1, jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent> p2) { return base_::new_object(p1, p2); }
	void read(jni::ref<com::sun::corba::se::impl::encoding::MarshalInputStream> p1) { return call_method<"read", void>(p1); }
	void write(jni::ref<com::sun::corba::se::impl::encoding::MarshalOutputStream> p1) { return call_method<"write", void>(p1); }
	jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent> getCharComponent() { return call_method<"getCharComponent", jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent>>(); }
	jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent> getWCharComponent() { return call_method<"getWCharComponent", jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent>>(); }
	static jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent> createFromString(jni::ref<java::lang::String> p1) { return call_static_method<"createFromString", jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo_CodeSetComponent>>(p1); }

protected:

	CodeSetComponentInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CODESETCOMPONENTINFO
