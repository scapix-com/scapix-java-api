// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_FACTORYFINDER_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_FACTORYFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::datatype { class FactoryFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::datatype::FactoryFinder>
{
	static constexpr fixed_string class_name = "javax/xml/datatype/FactoryFinder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_FACTORYFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_FACTORYFINDER)
#define SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_FACTORYFINDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::xml::datatype::FactoryFinder : public jni::object_base<"javax/xml/datatype/FactoryFinder",
	java::lang::Object>
{
public:


protected:

	FactoryFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_FACTORYFINDER
