// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/lang/model/util/SimpleAnnotationValueVisitor6.h>

#ifndef SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_SIMPLEANNOTATIONVALUEVISITOR7_FWD
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_SIMPLEANNOTATIONVALUEVISITOR7_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::lang::model::util { class SimpleAnnotationValueVisitor7; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::lang::model::util::SimpleAnnotationValueVisitor7>
{
	static constexpr fixed_string class_name = "javax/lang/model/util/SimpleAnnotationValueVisitor7";
	using base_classes = std::tuple<scapix::java_api::javax::lang::model::util::SimpleAnnotationValueVisitor6>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_SIMPLEANNOTATIONVALUEVISITOR7_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_SIMPLEANNOTATIONVALUEVISITOR7)
#define SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_SIMPLEANNOTATIONVALUEVISITOR7

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::lang::model::util::SimpleAnnotationValueVisitor7 : public jni::object_base<"javax/lang/model/util/SimpleAnnotationValueVisitor7",
	javax::lang::model::util::SimpleAnnotationValueVisitor6>
{
public:


protected:

	SimpleAnnotationValueVisitor7(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_LANG_MODEL_UTIL_SIMPLEANNOTATIONVALUEVISITOR7
