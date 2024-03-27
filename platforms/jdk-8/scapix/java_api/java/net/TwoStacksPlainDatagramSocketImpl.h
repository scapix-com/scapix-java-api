// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/AbstractPlainDatagramSocketImpl.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_TWOSTACKSPLAINDATAGRAMSOCKETIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_NET_TWOSTACKSPLAINDATAGRAMSOCKETIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class TwoStacksPlainDatagramSocketImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::TwoStacksPlainDatagramSocketImpl>
{
	static constexpr fixed_string class_name = "java/net/TwoStacksPlainDatagramSocketImpl";
	using base_classes = std::tuple<scapix::java_api::java::net::AbstractPlainDatagramSocketImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_TWOSTACKSPLAINDATAGRAMSOCKETIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_TWOSTACKSPLAINDATAGRAMSOCKETIMPL)
#define SCAPIX_JAVA_API_JAVA_NET_TWOSTACKSPLAINDATAGRAMSOCKETIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::TwoStacksPlainDatagramSocketImpl : public jni::object_base<"java/net/TwoStacksPlainDatagramSocketImpl",
	java::net::AbstractPlainDatagramSocketImpl>
{
public:

	jni::ref<java::lang::Object> getOption(jint p1) { return call_method<"getOption", jni::ref<java::lang::Object>>(p1); }

protected:

	TwoStacksPlainDatagramSocketImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_TWOSTACKSPLAINDATAGRAMSOCKETIMPL
