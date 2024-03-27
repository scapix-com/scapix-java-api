// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_NAMINGUTIL_IIOPENDPOINTINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_NAMINGUTIL_IIOPENDPOINTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::naming::namingutil { class IIOPEndpointInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::naming::namingutil::IIOPEndpointInfo>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/naming/namingutil/IIOPEndpointInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_NAMINGUTIL_IIOPENDPOINTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_NAMINGUTIL_IIOPENDPOINTINFO)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_NAMINGUTIL_IIOPENDPOINTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::naming::namingutil::IIOPEndpointInfo : public jni::object_base<"com/sun/corba/se/impl/naming/namingutil/IIOPEndpointInfo",
	java::lang::Object>
{
public:

	void setHost(jni::ref<java::lang::String> p1) { return call_method<"setHost", void>(p1); }
	jni::ref<java::lang::String> getHost() { return call_method<"getHost", jni::ref<java::lang::String>>(); }
	void setPort(jint p1) { return call_method<"setPort", void>(p1); }
	jint getPort() { return call_method<"getPort", jint>(); }
	void setVersion(jint p1, jint p2) { return call_method<"setVersion", void>(p1, p2); }
	jint getMajor() { return call_method<"getMajor", jint>(); }
	jint getMinor() { return call_method<"getMinor", jint>(); }
	void dump() { return call_method<"dump", void>(); }

protected:

	IIOPEndpointInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_NAMINGUTIL_IIOPENDPOINTINFO
