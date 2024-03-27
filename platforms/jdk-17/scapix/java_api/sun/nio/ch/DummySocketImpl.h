// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/SocketImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_DUMMYSOCKETIMPL_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_DUMMYSOCKETIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class DummySocketImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::DummySocketImpl>
{
	static constexpr fixed_string class_name = "sun/nio/ch/DummySocketImpl";
	using base_classes = std::tuple<scapix::java_api::java::net::SocketImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DUMMYSOCKETIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_DUMMYSOCKETIMPL)
#define SCAPIX_JAVA_API_SUN_NIO_CH_DUMMYSOCKETIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::ch::DummySocketImpl : public jni::object_base<"sun/nio/ch/DummySocketImpl",
	java::net::SocketImpl>
{
public:

	void setOption(jint opt, jni::ref<java::lang::Object> value) { return call_method<"setOption", void>(opt, value); }
	jni::ref<java::lang::Object> getOption(jint opt) { return call_method<"getOption", jni::ref<java::lang::Object>>(opt); }

protected:

	DummySocketImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_DUMMYSOCKETIMPL