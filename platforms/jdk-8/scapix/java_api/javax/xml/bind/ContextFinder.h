// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_CONTEXTFINDER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_CONTEXTFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class ContextFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::ContextFinder>
{
	static constexpr fixed_string class_name = "javax/xml/bind/ContextFinder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_CONTEXTFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_CONTEXTFINDER)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_CONTEXTFINDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::xml::bind::ContextFinder : public jni::object_base<"javax/xml/bind/ContextFinder",
	java::lang::Object>
{
public:


protected:

	ContextFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_CONTEXTFINDER
