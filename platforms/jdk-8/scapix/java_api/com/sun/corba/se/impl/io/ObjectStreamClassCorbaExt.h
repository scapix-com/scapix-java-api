// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASSCORBAEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASSCORBAEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::io { class ObjectStreamClassCorbaExt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::io::ObjectStreamClassCorbaExt>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/io/ObjectStreamClassCorbaExt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASSCORBAEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASSCORBAEXT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASSCORBAEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::io::ObjectStreamClassCorbaExt : public jni::object_base<"com/sun/corba/se/impl/io/ObjectStreamClassCorbaExt",
	java::lang::Object>
{
public:


protected:

	ObjectStreamClassCorbaExt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_OBJECTSTREAMCLASSCORBAEXT
