// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfoListIterator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOLISTITERATORIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOLISTITERATORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::transport { class CorbaContactInfoListIteratorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::transport::CorbaContactInfoListIteratorImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/transport/CorbaContactInfoListIteratorImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::transport::CorbaContactInfoListIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOLISTITERATORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOLISTITERATORIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOLISTITERATORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfoList.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfoList.h>
#include <scapix/java_api/java/lang/RuntimeException.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::transport::CorbaContactInfoListIteratorImpl : public jni::object_base<"com/sun/corba/se/impl/transport/CorbaContactInfoListIteratorImpl",
	java::lang::Object,
	com::sun::corba::se::spi::transport::CorbaContactInfoListIterator>
{
public:

	static jni::ref<com::sun::corba::se::impl::transport::CorbaContactInfoListIteratorImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoList> p2, jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p3, jni::ref<java::util::List> p4) { return base_::new_object(p1, p2, p3, p4); }
	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void remove() { return call_method<"remove", void>(); }
	jni::ref<com::sun::corba::se::pept::transport::ContactInfoList> getContactInfoList() { return call_method<"getContactInfoList", jni::ref<com::sun::corba::se::pept::transport::ContactInfoList>>(); }
	void reportSuccess(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1) { return call_method<"reportSuccess", void>(p1); }
	jboolean reportException(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1, jni::ref<java::lang::RuntimeException> p2) { return call_method<"reportException", jboolean>(p1, p2); }
	jni::ref<java::lang::RuntimeException> getFailureException() { return call_method<"getFailureException", jni::ref<java::lang::RuntimeException>>(); }
	void reportAddrDispositionRetry(jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfo> p1, jshort p2) { return call_method<"reportAddrDispositionRetry", void>(p1, p2); }
	void reportRedirect(jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfo> p1, jni::ref<com::sun::corba::se::spi::ior::IOR> p2) { return call_method<"reportRedirect", void>(p1, p2); }
	void updateEffectiveTargetIOR(jni::ref<com::sun::corba::se::spi::ior::IOR> p1) { return call_method<"updateEffectiveTargetIOR", void>(p1); }

protected:

	CorbaContactInfoListIteratorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_TRANSPORT_CORBACONTACTINFOLISTITERATORIMPL
