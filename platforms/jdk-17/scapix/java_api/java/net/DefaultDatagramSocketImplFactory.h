// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_DEFAULTDATAGRAMSOCKETIMPLFACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_NET_DEFAULTDATAGRAMSOCKETIMPLFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class DefaultDatagramSocketImplFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::DefaultDatagramSocketImplFactory>
{
	static constexpr fixed_string class_name = "java/net/DefaultDatagramSocketImplFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DEFAULTDATAGRAMSOCKETIMPLFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_DEFAULTDATAGRAMSOCKETIMPLFACTORY)
#define SCAPIX_JAVA_API_JAVA_NET_DEFAULTDATAGRAMSOCKETIMPLFACTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::DefaultDatagramSocketImplFactory : public jni::object_base<"java/net/DefaultDatagramSocketImplFactory",
	java::lang::Object>
{
public:


protected:

	DefaultDatagramSocketImplFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DEFAULTDATAGRAMSOCKETIMPLFACTORY
