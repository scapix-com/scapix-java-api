// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/SocketOption.h>

#ifndef SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_EXTSOCKETOPTION_FWD
#define SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_EXTSOCKETOPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::net { class ExtendedSocketOptions_ExtSocketOption; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::net::ExtendedSocketOptions_ExtSocketOption>
{
	static constexpr fixed_string class_name = "jdk/net/ExtendedSocketOptions$ExtSocketOption";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::net::SocketOption>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_EXTSOCKETOPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_EXTSOCKETOPTION)
#define SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_EXTSOCKETOPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::net::ExtendedSocketOptions_ExtSocketOption : public jni::object_base<"jdk/net/ExtendedSocketOptions$ExtSocketOption",
	java::lang::Object,
	java::net::SocketOption>
{
public:

	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> type() { return call_method<"type", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ExtendedSocketOptions_ExtSocketOption(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_NET_EXTENDEDSOCKETOPTIONS_EXTSOCKETOPTION