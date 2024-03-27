// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/ClientInvocationInfo.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_CORBAINVOCATIONINFO_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_CORBAINVOCATIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::protocol { class CorbaInvocationInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::protocol::CorbaInvocationInfo>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/protocol/CorbaInvocationInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::pept::protocol::ClientInvocationInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_CORBAINVOCATIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_CORBAINVOCATIONINFO)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_CORBAINVOCATIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/pept/protocol/ClientRequestDispatcher.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/MessageMediator.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::protocol::CorbaInvocationInfo : public jni::object_base<"com/sun/corba/se/impl/protocol/CorbaInvocationInfo",
	java::lang::Object,
	com::sun::corba::se::pept::protocol::ClientInvocationInfo>
{
public:

	static jni::ref<com::sun::corba::se::impl::protocol::CorbaInvocationInfo> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	jni::ref<java::util::Iterator> getContactInfoListIterator() { return call_method<"getContactInfoListIterator", jni::ref<java::util::Iterator>>(); }
	void setContactInfoListIterator(jni::ref<java::util::Iterator> p1) { return call_method<"setContactInfoListIterator", void>(p1); }
	jboolean isRetryInvocation() { return call_method<"isRetryInvocation", jboolean>(); }
	void setIsRetryInvocation(jboolean p1) { return call_method<"setIsRetryInvocation", void>(p1); }
	jint getEntryCount() { return call_method<"getEntryCount", jint>(); }
	void incrementEntryCount() { return call_method<"incrementEntryCount", void>(); }
	void decrementEntryCount() { return call_method<"decrementEntryCount", void>(); }
	void setClientRequestDispatcher(jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher> p1) { return call_method<"setClientRequestDispatcher", void>(p1); }
	jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher> getClientRequestDispatcher() { return call_method<"getClientRequestDispatcher", jni::ref<com::sun::corba::se::pept::protocol::ClientRequestDispatcher>>(); }
	void setMessageMediator(jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> p1) { return call_method<"setMessageMediator", void>(p1); }
	jni::ref<com::sun::corba::se::pept::protocol::MessageMediator> getMessageMediator() { return call_method<"getMessageMediator", jni::ref<com::sun::corba::se::pept::protocol::MessageMediator>>(); }

protected:

	CorbaInvocationInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PROTOCOL_CORBAINVOCATIONINFO