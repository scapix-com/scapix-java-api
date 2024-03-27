// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONTYPE_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::relation { class RelationType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::relation::RelationType>
{
	static constexpr fixed_string class_name = "javax/management/relation/RelationType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONTYPE)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/management/relation/RoleInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::relation::RelationType : public jni::object_base<"javax/management/relation/RelationType",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> getRelationTypeName() { return call_method<"getRelationTypeName", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getRoleInfos() { return call_method<"getRoleInfos", jni::ref<java::util::List>>(); }
	jni::ref<javax::management::relation::RoleInfo> getRoleInfo(jni::ref<java::lang::String> p1) { return call_method<"getRoleInfo", jni::ref<javax::management::relation::RoleInfo>>(p1); }

protected:

	RelationType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONTYPE
