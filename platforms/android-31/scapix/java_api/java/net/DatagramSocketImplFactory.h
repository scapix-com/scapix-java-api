// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKETIMPLFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKETIMPLFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class DatagramSocketImplFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::DatagramSocketImplFactory>
{
	static constexpr fixed_string class_name = "java/net/DatagramSocketImplFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKETIMPLFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKETIMPLFACTORY)
#define SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKETIMPLFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/DatagramSocketImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::DatagramSocketImplFactory : public jni::object_base<"java/net/DatagramSocketImplFactory",
	java::lang::Object>
{
public:

	jni::ref<java::net::DatagramSocketImpl> createDatagramSocketImpl() { return call_method<"createDatagramSocketImpl", jni::ref<java::net::DatagramSocketImpl>>(); }

protected:

	DatagramSocketImplFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DATAGRAMSOCKETIMPLFACTORY