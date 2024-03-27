// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_ORBSINGLETON_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_ORBSINGLETON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orb { class ORBSingleton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orb::ORBSingleton>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orb/ORBSingleton";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::orb::ORB>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_ORBSINGLETON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_ORBSINGLETON)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_ORBSINGLETON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/corba/TypeCodeImpl.h>
#include <scapix/java_api/com/sun/corba/se/impl/encoding/CodeSetComponentInfo.h>
#include <scapix/java_api/com/sun/corba/se/impl/oa/poa/BadServerIdHandler.h>
#include <scapix/java_api/com/sun/corba/se/pept/protocol/ClientInvocationInfo.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ConnectionCache.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/ContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/Selector.h>
#include <scapix/java_api/com/sun/corba/se/pept/transport/TransportManager.h>
#include <scapix/java_api/com/sun/corba/se/spi/copyobject/CopierManager.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/IdentifiableFactoryFinder.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKey.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedComponentFactoryFinder.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/legacy/connection/LegacyServerSocketEndPointInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/legacy/connection/LegacyServerSocketManager.h>
#include <scapix/java_api/com/sun/corba/se/spi/oa/OAInvocationInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORBData.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORBVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/Operation.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/closure/Closure.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/threadpool/ThreadPoolManager.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/ClientDelegateFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaServerRequestDispatcher.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/PIHandler.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/RequestDispatcherRegistry.h>
#include <scapix/java_api/com/sun/corba/se/spi/resolver/LocalResolver.h>
#include <scapix/java_api/com/sun/corba/se/spi/resolver/Resolver.h>
#include <scapix/java_api/com/sun/corba/se/spi/servicecontext/ServiceContextRegistry.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfoListFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaTransportManager.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/Context.h>
#include <scapix/java_api/org/omg/CORBA/ContextList.h>
#include <scapix/java_api/org/omg/CORBA/Current.h>
#include <scapix/java_api/org/omg/CORBA/Environment.h>
#include <scapix/java_api/org/omg/CORBA/ExceptionList.h>
#include <scapix/java_api/org/omg/CORBA/NVList.h>
#include <scapix/java_api/org/omg/CORBA/NamedValue.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/Policy.h>
#include <scapix/java_api/org/omg/CORBA/Request.h>
#include <scapix/java_api/org/omg/CORBA/StructMember.h>
#include <scapix/java_api/org/omg/CORBA/TCKind.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/UnionMember.h>
#include <scapix/java_api/org/omg/CORBA/ValueMember.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/ValueFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orb::ORBSingleton : public jni::object_base<"com/sun/corba/se/impl/orb/ORBSingleton",
	com::sun::corba::se::spi::orb::ORB>
{
public:

	static jni::ref<com::sun::corba::se::impl::orb::ORBSingleton> new_object() { return base_::new_object(); }
	void set_parameters(jni::ref<java::util::Properties> p1) { return call_method<"set_parameters", void>(p1); }
	jni::ref<org::omg::CORBA::portable::OutputStream> create_output_stream() { return call_method<"create_output_stream", jni::ref<org::omg::CORBA::portable::OutputStream>>(); }
	jni::ref<org::omg::CORBA::TypeCode> create_struct_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<org::omg::CORBA::StructMember>> p3) { return call_method<"create_struct_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::TypeCode> create_union_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<org::omg::CORBA::TypeCode> p3, jni::ref<jni::array<org::omg::CORBA::UnionMember>> p4) { return call_method<"create_union_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3, p4); }
	jni::ref<org::omg::CORBA::TypeCode> create_enum_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::String>> p3) { return call_method<"create_enum_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::TypeCode> create_alias_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<org::omg::CORBA::TypeCode> p3) { return call_method<"create_alias_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::TypeCode> create_exception_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<org::omg::CORBA::StructMember>> p3) { return call_method<"create_exception_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::TypeCode> create_interface_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"create_interface_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2); }
	jni::ref<org::omg::CORBA::TypeCode> create_string_tc(jint p1) { return call_method<"create_string_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> create_wstring_tc(jint p1) { return call_method<"create_wstring_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> create_sequence_tc(jint p1, jni::ref<org::omg::CORBA::TypeCode> p2) { return call_method<"create_sequence_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2); }
	jni::ref<org::omg::CORBA::TypeCode> create_recursive_sequence_tc(jint p1, jint p2) { return call_method<"create_recursive_sequence_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2); }
	jni::ref<org::omg::CORBA::TypeCode> create_array_tc(jint p1, jni::ref<org::omg::CORBA::TypeCode> p2) { return call_method<"create_array_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2); }
	jni::ref<org::omg::CORBA::TypeCode> create_native_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"create_native_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2); }
	jni::ref<org::omg::CORBA::TypeCode> create_abstract_interface_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"create_abstract_interface_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2); }
	jni::ref<org::omg::CORBA::TypeCode> create_fixed_tc(jshort p1, jshort p2) { return call_method<"create_fixed_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2); }
	jni::ref<org::omg::CORBA::TypeCode> create_value_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jshort p3, jni::ref<org::omg::CORBA::TypeCode> p4, jni::ref<jni::array<org::omg::CORBA::ValueMember>> p5) { return call_method<"create_value_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3, p4, p5); }
	jni::ref<org::omg::CORBA::TypeCode> create_recursive_tc(jni::ref<java::lang::String> p1) { return call_method<"create_recursive_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> create_value_box_tc(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<org::omg::CORBA::TypeCode> p3) { return call_method<"create_value_box_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::TypeCode> get_primitive_tc(jni::ref<org::omg::CORBA::TCKind> p1) { return call_method<"get_primitive_tc", jni::ref<org::omg::CORBA::TypeCode>>(p1); }
	jni::ref<org::omg::CORBA::Any> create_any() { return call_method<"create_any", jni::ref<org::omg::CORBA::Any>>(); }
	jni::ref<org::omg::CORBA::NVList> create_list(jint p1) { return call_method<"create_list", jni::ref<org::omg::CORBA::NVList>>(p1); }
	jni::ref<org::omg::CORBA::NVList> create_operation_list(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"create_operation_list", jni::ref<org::omg::CORBA::NVList>>(p1); }
	jni::ref<org::omg::CORBA::NamedValue> create_named_value(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::Any> p2, jint p3) { return call_method<"create_named_value", jni::ref<org::omg::CORBA::NamedValue>>(p1, p2, p3); }
	jni::ref<org::omg::CORBA::ExceptionList> create_exception_list() { return call_method<"create_exception_list", jni::ref<org::omg::CORBA::ExceptionList>>(); }
	jni::ref<org::omg::CORBA::ContextList> create_context_list() { return call_method<"create_context_list", jni::ref<org::omg::CORBA::ContextList>>(); }
	jni::ref<org::omg::CORBA::Context> get_default_context() { return call_method<"get_default_context", jni::ref<org::omg::CORBA::Context>>(); }
	jni::ref<org::omg::CORBA::Environment> create_environment() { return call_method<"create_environment", jni::ref<org::omg::CORBA::Environment>>(); }
	jni::ref<org::omg::CORBA::Current> get_current() { return call_method<"get_current", jni::ref<org::omg::CORBA::Current>>(); }
	jni::ref<jni::array<java::lang::String>> list_initial_services() { return call_method<"list_initial_services", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<org::omg::CORBA::Object> resolve_initial_references(jni::ref<java::lang::String> p1) { return call_method<"resolve_initial_references", jni::ref<org::omg::CORBA::Object>>(p1); }
	void register_initial_reference(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::Object> p2) { return call_method<"register_initial_reference", void>(p1, p2); }
	void send_multiple_requests_oneway(jni::ref<jni::array<org::omg::CORBA::Request>> p1) { return call_method<"send_multiple_requests_oneway", void>(p1); }
	void send_multiple_requests_deferred(jni::ref<jni::array<org::omg::CORBA::Request>> p1) { return call_method<"send_multiple_requests_deferred", void>(p1); }
	jboolean poll_next_response() { return call_method<"poll_next_response", jboolean>(); }
	jni::ref<org::omg::CORBA::Request> get_next_response() { return call_method<"get_next_response", jni::ref<org::omg::CORBA::Request>>(); }
	jni::ref<java::lang::String> object_to_string(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"object_to_string", jni::ref<java::lang::String>>(p1); }
	jni::ref<org::omg::CORBA::Object> string_to_object(jni::ref<java::lang::String> p1) { return call_method<"string_to_object", jni::ref<org::omg::CORBA::Object>>(p1); }
	jni::ref<java::rmi::Remote> string_to_remote(jni::ref<java::lang::String> p1) { return call_method<"string_to_remote", jni::ref<java::rmi::Remote>>(p1); }
	void connect(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"connect", void>(p1); }
	void disconnect(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"disconnect", void>(p1); }
	void run() { return call_method<"run", void>(); }
	void shutdown(jboolean p1) { return call_method<"shutdown", void>(p1); }
	void destroy() { return call_method<"destroy", void>(); }
	jboolean work_pending() { return call_method<"work_pending", jboolean>(); }
	void perform_work() { return call_method<"perform_work", void>(); }
	jni::ref<org::omg::CORBA::portable::ValueFactory> register_value_factory(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::portable::ValueFactory> p2) { return call_method<"register_value_factory", jni::ref<org::omg::CORBA::portable::ValueFactory>>(p1, p2); }
	void unregister_value_factory(jni::ref<java::lang::String> p1) { return call_method<"unregister_value_factory", void>(p1); }
	jni::ref<org::omg::CORBA::portable::ValueFactory> lookup_value_factory(jni::ref<java::lang::String> p1) { return call_method<"lookup_value_factory", jni::ref<org::omg::CORBA::portable::ValueFactory>>(p1); }
	jni::ref<com::sun::corba::se::pept::transport::TransportManager> getTransportManager() { return call_method<"getTransportManager", jni::ref<com::sun::corba::se::pept::transport::TransportManager>>(); }
	jni::ref<com::sun::corba::se::spi::transport::CorbaTransportManager> getCorbaTransportManager() { return call_method<"getCorbaTransportManager", jni::ref<com::sun::corba::se::spi::transport::CorbaTransportManager>>(); }
	jni::ref<com::sun::corba::se::spi::legacy::connection::LegacyServerSocketManager> getLegacyServerSocketManager() { return call_method<"getLegacyServerSocketManager", jni::ref<com::sun::corba::se::spi::legacy::connection::LegacyServerSocketManager>>(); }
	jni::ref<com::sun::corba::se::spi::protocol::RequestDispatcherRegistry> getRequestDispatcherRegistry() { return call_method<"getRequestDispatcherRegistry", jni::ref<com::sun::corba::se::spi::protocol::RequestDispatcherRegistry>>(); }
	jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContextRegistry> getServiceContextRegistry() { return call_method<"getServiceContextRegistry", jni::ref<com::sun::corba::se::spi::servicecontext::ServiceContextRegistry>>(); }
	jint getTransientServerId() { return call_method<"getTransientServerId", jint>(); }
	jint getORBInitialPort() { return call_method<"getORBInitialPort", jint>(); }
	jni::ref<java::lang::String> getORBInitialHost() { return call_method<"getORBInitialHost", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getORBServerHost() { return call_method<"getORBServerHost", jni::ref<java::lang::String>>(); }
	jint getORBServerPort() { return call_method<"getORBServerPort", jint>(); }
	jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo> getCodeSetComponentInfo() { return call_method<"getCodeSetComponentInfo", jni::ref<com::sun::corba::se::impl::encoding::CodeSetComponentInfo>>(); }
	jboolean isLocalHost(jni::ref<java::lang::String> p1) { return call_method<"isLocalHost", jboolean>(p1); }
	jboolean isLocalServerId(jint p1, jint p2) { return call_method<"isLocalServerId", jboolean>(p1, p2); }
	jni::ref<com::sun::corba::se::spi::orb::ORBVersion> getORBVersion() { return call_method<"getORBVersion", jni::ref<com::sun::corba::se::spi::orb::ORBVersion>>(); }
	void setORBVersion(jni::ref<com::sun::corba::se::spi::orb::ORBVersion> p1) { return call_method<"setORBVersion", void>(p1); }
	jni::ref<java::lang::String> getAppletHost() { return call_method<"getAppletHost", jni::ref<java::lang::String>>(); }
	jni::ref<java::net::URL> getAppletCodeBase() { return call_method<"getAppletCodeBase", jni::ref<java::net::URL>>(); }
	jint getHighWaterMark() { return call_method<"getHighWaterMark", jint>(); }
	jint getLowWaterMark() { return call_method<"getLowWaterMark", jint>(); }
	jint getNumberToReclaim() { return call_method<"getNumberToReclaim", jint>(); }
	jint getGIOPFragmentSize() { return call_method<"getGIOPFragmentSize", jint>(); }
	jint getGIOPBuffMgrStrategy(jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> p1) { return call_method<"getGIOPBuffMgrStrategy", jint>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::IOR> getFVDCodeBaseIOR() { return call_method<"getFVDCodeBaseIOR", jni::ref<com::sun::corba::se::spi::ior::IOR>>(); }
	jni::ref<org::omg::CORBA::Policy> create_policy(jint p1, jni::ref<org::omg::CORBA::Any> p2) { return call_method<"create_policy", jni::ref<org::omg::CORBA::Policy>>(p1, p2); }
	jni::ref<com::sun::corba::se::spi::legacy::connection::LegacyServerSocketEndPointInfo> getServerEndpoint() { return call_method<"getServerEndpoint", jni::ref<com::sun::corba::se::spi::legacy::connection::LegacyServerSocketEndPointInfo>>(); }
	void setPersistentServerId(jint p1) { return call_method<"setPersistentServerId", void>(p1); }
	jni::ref<com::sun::corba::se::impl::corba::TypeCodeImpl> getTypeCodeForClass(jni::ref<java::lang::Class> p1) { return call_method<"getTypeCodeForClass", jni::ref<com::sun::corba::se::impl::corba::TypeCodeImpl>>(p1); }
	void setTypeCodeForClass(jni::ref<java::lang::Class> p1, jni::ref<com::sun::corba::se::impl::corba::TypeCodeImpl> p2) { return call_method<"setTypeCodeForClass", void>(p1, p2); }
	jboolean alwaysSendCodeSetServiceContext() { return call_method<"alwaysSendCodeSetServiceContext", jboolean>(); }
	jboolean isDuringDispatch() { return call_method<"isDuringDispatch", jboolean>(); }
	void notifyORB() { return call_method<"notifyORB", void>(); }
	jni::ref<com::sun::corba::se::spi::protocol::PIHandler> getPIHandler() { return call_method<"getPIHandler", jni::ref<com::sun::corba::se::spi::protocol::PIHandler>>(); }
	void checkShutdownState() { return call_method<"checkShutdownState", void>(); }
	void startingDispatch() { return call_method<"startingDispatch", void>(); }
	void finishedDispatch() { return call_method<"finishedDispatch", void>(); }
	void registerInitialReference(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orbutil::closure::Closure> p2) { return call_method<"registerInitialReference", void>(p1, p2); }
	jni::ref<com::sun::corba::se::spi::orb::ORBData> getORBData() { return call_method<"getORBData", jni::ref<com::sun::corba::se::spi::orb::ORBData>>(); }
	void setClientDelegateFactory(jni::ref<com::sun::corba::se::spi::protocol::ClientDelegateFactory> p1) { return call_method<"setClientDelegateFactory", void>(p1); }
	jni::ref<com::sun::corba::se::spi::protocol::ClientDelegateFactory> getClientDelegateFactory() { return call_method<"getClientDelegateFactory", jni::ref<com::sun::corba::se::spi::protocol::ClientDelegateFactory>>(); }
	void setCorbaContactInfoListFactory(jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoListFactory> p1) { return call_method<"setCorbaContactInfoListFactory", void>(p1); }
	jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoListFactory> getCorbaContactInfoListFactory() { return call_method<"getCorbaContactInfoListFactory", jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoListFactory>>(); }
	jni::ref<com::sun::corba::se::spi::orb::Operation> getURLOperation() { return call_method<"getURLOperation", jni::ref<com::sun::corba::se::spi::orb::Operation>>(); }
	void setINSDelegate(jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher> p1) { return call_method<"setINSDelegate", void>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::TaggedComponentFactoryFinder> getTaggedComponentFactoryFinder() { return call_method<"getTaggedComponentFactoryFinder", jni::ref<com::sun::corba::se::spi::ior::TaggedComponentFactoryFinder>>(); }
	jni::ref<com::sun::corba::se::spi::ior::IdentifiableFactoryFinder> getTaggedProfileFactoryFinder() { return call_method<"getTaggedProfileFactoryFinder", jni::ref<com::sun::corba::se::spi::ior::IdentifiableFactoryFinder>>(); }
	jni::ref<com::sun::corba::se::spi::ior::IdentifiableFactoryFinder> getTaggedProfileTemplateFactoryFinder() { return call_method<"getTaggedProfileTemplateFactoryFinder", jni::ref<com::sun::corba::se::spi::ior::IdentifiableFactoryFinder>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKeyFactory> getObjectKeyFactory() { return call_method<"getObjectKeyFactory", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyFactory>>(); }
	void setObjectKeyFactory(jni::ref<com::sun::corba::se::spi::ior::ObjectKeyFactory> p1) { return call_method<"setObjectKeyFactory", void>(p1); }
	void handleBadServerId(jni::ref<com::sun::corba::se::spi::ior::ObjectKey> p1) { return call_method<"handleBadServerId", void>(p1); }
	jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo> peekInvocationInfo() { return call_method<"peekInvocationInfo", jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo>>(); }
	void pushInvocationInfo(jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo> p1) { return call_method<"pushInvocationInfo", void>(p1); }
	jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo> popInvocationInfo() { return call_method<"popInvocationInfo", jni::ref<com::sun::corba::se::spi::oa::OAInvocationInfo>>(); }
	jni::ref<com::sun::corba::se::pept::protocol::ClientInvocationInfo> createOrIncrementInvocationInfo() { return call_method<"createOrIncrementInvocationInfo", jni::ref<com::sun::corba::se::pept::protocol::ClientInvocationInfo>>(); }
	void releaseOrDecrementInvocationInfo() { return call_method<"releaseOrDecrementInvocationInfo", void>(); }
	jni::ref<com::sun::corba::se::pept::protocol::ClientInvocationInfo> getInvocationInfo() { return call_method<"getInvocationInfo", jni::ref<com::sun::corba::se::pept::protocol::ClientInvocationInfo>>(); }
	jni::ref<com::sun::corba::se::pept::transport::ConnectionCache> getConnectionCache(jni::ref<com::sun::corba::se::pept::transport::ContactInfo> p1) { return call_method<"getConnectionCache", jni::ref<com::sun::corba::se::pept::transport::ConnectionCache>>(p1); }
	void setResolver(jni::ref<com::sun::corba::se::spi::resolver::Resolver> p1) { return call_method<"setResolver", void>(p1); }
	jni::ref<com::sun::corba::se::spi::resolver::Resolver> getResolver() { return call_method<"getResolver", jni::ref<com::sun::corba::se::spi::resolver::Resolver>>(); }
	void setLocalResolver(jni::ref<com::sun::corba::se::spi::resolver::LocalResolver> p1) { return call_method<"setLocalResolver", void>(p1); }
	jni::ref<com::sun::corba::se::spi::resolver::LocalResolver> getLocalResolver() { return call_method<"getLocalResolver", jni::ref<com::sun::corba::se::spi::resolver::LocalResolver>>(); }
	void setURLOperation(jni::ref<com::sun::corba::se::spi::orb::Operation> p1) { return call_method<"setURLOperation", void>(p1); }
	void setBadServerIdHandler(jni::ref<com::sun::corba::se::impl::oa::poa::BadServerIdHandler> p1) { return call_method<"setBadServerIdHandler", void>(p1); }
	void initBadServerIdHandler() { return call_method<"initBadServerIdHandler", void>(); }
	jni::ref<com::sun::corba::se::pept::transport::Selector> getSelector(jint p1) { return call_method<"getSelector", jni::ref<com::sun::corba::se::pept::transport::Selector>>(p1); }
	void setThreadPoolManager(jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolManager> p1) { return call_method<"setThreadPoolManager", void>(p1); }
	jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolManager> getThreadPoolManager() { return call_method<"getThreadPoolManager", jni::ref<com::sun::corba::se::spi::orbutil::threadpool::ThreadPoolManager>>(); }
	jni::ref<com::sun::corba::se::spi::copyobject::CopierManager> getCopierManager() { return call_method<"getCopierManager", jni::ref<com::sun::corba::se::spi::copyobject::CopierManager>>(); }
	void validateIORClass(jni::ref<java::lang::String> p1) { return call_method<"validateIORClass", void>(p1); }

protected:

	ORBSingleton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_ORBSINGLETON
