// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_DBSERVERDEF_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_DBSERVERDEF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::activation { class RepositoryImpl_DBServerDef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::activation::RepositoryImpl_DBServerDef>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/activation/RepositoryImpl$DBServerDef";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_DBSERVERDEF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_DBSERVERDEF)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_DBSERVERDEF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::activation::RepositoryImpl_DBServerDef : public jni::object_base<"com/sun/corba/se/impl/activation/RepositoryImpl$DBServerDef",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RepositoryImpl_DBServerDef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_DBSERVERDEF
