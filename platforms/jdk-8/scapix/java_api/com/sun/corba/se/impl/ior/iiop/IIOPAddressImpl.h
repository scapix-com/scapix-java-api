// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/iiop/IIOPAddressBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior::iiop { class IIOPAddressImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::iiop::IIOPAddressImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/iiop/IIOPAddressImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::iiop::IIOPAddressBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::iiop::IIOPAddressImpl : public jni::object_base<"com/sun/corba/se/impl/ior/iiop/IIOPAddressImpl",
	com::sun::corba::se::impl::ior::iiop::IIOPAddressBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::iiop::IIOPAddressImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<java::lang::String> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::corba::se::impl::ior::iiop::IIOPAddressImpl> new_object(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getHost() { return call_method<"getHost", jni::ref<java::lang::String>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }

protected:

	IIOPAddressImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSIMPL