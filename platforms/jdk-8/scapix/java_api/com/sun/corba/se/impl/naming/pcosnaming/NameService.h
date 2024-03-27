// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_NAMESERVICE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_NAMESERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::naming::pcosnaming { class NameService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::naming::pcosnaming::NameService>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/naming/pcosnaming/NameService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_NAMESERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_NAMESERVICE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_NAMESERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/org/omg/CosNaming/NamingContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::naming::pcosnaming::NameService : public jni::object_base<"com/sun/corba/se/impl/naming/pcosnaming/NameService",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::naming::pcosnaming::NameService> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<java::io::File> p2) { return base_::new_object(p1, p2); }
	jni::ref<org::omg::CosNaming::NamingContext> initialNamingContext() { return call_method<"initialNamingContext", jni::ref<org::omg::CosNaming::NamingContext>>(); }
	jni::ref<org::omg::CosNaming::NamingContext> NewContext() { return call_method<"NewContext", jni::ref<org::omg::CosNaming::NamingContext>>(); }

protected:

	NameService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_NAMING_PCOSNAMING_NAMESERVICE
