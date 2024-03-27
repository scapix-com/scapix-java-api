// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/relation/RelationException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_INVALIDRELATIONTYPEEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_INVALIDRELATIONTYPEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::relation { class InvalidRelationTypeException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::relation::InvalidRelationTypeException>
{
	static constexpr fixed_string class_name = "javax/management/relation/InvalidRelationTypeException";
	using base_classes = std::tuple<scapix::java_api::javax::management::relation::RelationException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_INVALIDRELATIONTYPEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_INVALIDRELATIONTYPEEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_INVALIDRELATIONTYPEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::relation::InvalidRelationTypeException : public jni::object_base<"javax/management/relation/InvalidRelationTypeException",
	javax::management::relation::RelationException>
{
public:

	static jni::ref<javax::management::relation::InvalidRelationTypeException> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::relation::InvalidRelationTypeException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	InvalidRelationTypeException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_INVALIDRELATIONTYPEEXCEPTION
