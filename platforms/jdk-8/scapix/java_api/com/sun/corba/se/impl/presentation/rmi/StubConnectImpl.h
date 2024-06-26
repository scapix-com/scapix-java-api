// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBCONNECTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBCONNECTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::presentation::rmi { class StubConnectImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::presentation::rmi::StubConnectImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/presentation/rmi/StubConnectImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBCONNECTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBCONNECTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBCONNECTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/ior/StubIORImpl.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::presentation::rmi::StubConnectImpl : public jni::object_base<"com/sun/corba/se/impl/presentation/rmi/StubConnectImpl",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::presentation::rmi::StubConnectImpl> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::impl::ior::StubIORImpl> connect(jni::ref<com::sun::corba::se::impl::ior::StubIORImpl> p1, jni::ref<org::omg::CORBA::Object> p2, jni::ref<org::omg::CORBA::portable::ObjectImpl> p3, jni::ref<org::omg::CORBA::ORB> p4) { return call_static_method<"connect", jni::ref<com::sun::corba::se::impl::ior::StubIORImpl>>(p1, p2, p3, p4); }

protected:

	StubConnectImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBCONNECTIMPL
