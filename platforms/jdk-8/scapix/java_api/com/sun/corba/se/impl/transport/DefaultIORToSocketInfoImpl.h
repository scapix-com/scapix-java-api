// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/IORToSocketInfo.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTIORTOSOCKETINFOIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTIORTOSOCKETINFOIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::transport { class DefaultIORToSocketInfoImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::transport::DefaultIORToSocketInfoImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/transport/DefaultIORToSocketInfoImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::transport::IORToSocketInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTIORTOSOCKETINFOIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTIORTOSOCKETINFOIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTIORTOSOCKETINFOIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::transport::DefaultIORToSocketInfoImpl : public jni::object_base<"com/sun/corba/se/impl/transport/DefaultIORToSocketInfoImpl",
	java::lang::Object,
	com::sun::corba::se::spi::transport::IORToSocketInfo>
{
public:

	static jni::ref<com::sun::corba::se::impl::transport::DefaultIORToSocketInfoImpl> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> getSocketInfo(jni::ref<com::sun::corba::se::spi::ior::IOR> p1) { return call_method<"getSocketInfo", jni::ref<java::util::List>>(p1); }

protected:

	DefaultIORToSocketInfoImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_DEFAULTIORTOSOCKETINFOIMPL
