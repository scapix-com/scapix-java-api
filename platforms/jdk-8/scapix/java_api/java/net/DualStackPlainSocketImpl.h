// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/AbstractPlainSocketImpl.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_DUALSTACKPLAINSOCKETIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_NET_DUALSTACKPLAINSOCKETIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class DualStackPlainSocketImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::DualStackPlainSocketImpl>
{
	static constexpr fixed_string class_name = "java/net/DualStackPlainSocketImpl";
	using base_classes = std::tuple<scapix::java_api::java::net::AbstractPlainSocketImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DUALSTACKPLAINSOCKETIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_DUALSTACKPLAINSOCKETIMPL)
#define SCAPIX_JAVA_API_JAVA_NET_DUALSTACKPLAINSOCKETIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::DualStackPlainSocketImpl : public jni::object_base<"java/net/DualStackPlainSocketImpl",
	java::net::AbstractPlainSocketImpl>
{
public:

	static jni::ref<java::net::DualStackPlainSocketImpl> new_object(jboolean p1, jboolean p2) { return base_::new_object(p1, p2); }

protected:

	DualStackPlainSocketImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_DUALSTACKPLAINSOCKETIMPL
