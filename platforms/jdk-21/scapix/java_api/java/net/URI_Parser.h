// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_URI_PARSER_FWD
#define SCAPIX_JAVA_API_JAVA_NET_URI_PARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class URI_Parser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::URI_Parser>
{
	static constexpr fixed_string class_name = "java/net/URI$Parser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URI_PARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_URI_PARSER)
#define SCAPIX_JAVA_API_JAVA_NET_URI_PARSER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::URI_Parser : public jni::object_base<"java/net/URI$Parser",
	java::lang::Object>
{
public:


protected:

	URI_Parser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URI_PARSER
