// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/iiop/IIOPAddressBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSCLOSUREIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSCLOSUREIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior::iiop { class IIOPAddressClosureImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::iiop::IIOPAddressClosureImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/iiop/IIOPAddressClosureImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::iiop::IIOPAddressBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSCLOSUREIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSCLOSUREIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSCLOSUREIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/closure/Closure.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::iiop::IIOPAddressClosureImpl : public jni::object_base<"com/sun/corba/se/impl/ior/iiop/IIOPAddressClosureImpl",
	com::sun::corba::se::impl::ior::iiop::IIOPAddressBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::iiop::IIOPAddressClosureImpl> new_object(jni::ref<com::sun::corba::se::spi::orbutil::closure::Closure> p1, jni::ref<com::sun::corba::se::spi::orbutil::closure::Closure> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getHost() { return call_method<"getHost", jni::ref<java::lang::String>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }

protected:

	IIOPAddressClosureImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_IIOP_IIOPADDRESSCLOSUREIMPL
