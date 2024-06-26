// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/NotificationBroadcasterSupport.h>
#include <scapix/java_api/javax/management/relation/RelationServiceMBean.h>
#include <scapix/java_api/javax/management/MBeanRegistration.h>
#include <scapix/java_api/javax/management/NotificationListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONSERVICE_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::relation { class RelationService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::relation::RelationService>
{
	static constexpr fixed_string class_name = "javax/management/relation/RelationService";
	using base_classes = std::tuple<scapix::java_api::javax::management::NotificationBroadcasterSupport, scapix::java_api::javax::management::relation::RelationServiceMBean, scapix::java_api::javax::management::MBeanRegistration, scapix::java_api::javax::management::NotificationListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONSERVICE)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/management/MBeanNotificationInfo.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/Notification.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#include <scapix/java_api/javax/management/relation/RelationType.h>
#include <scapix/java_api/javax/management/relation/Role.h>
#include <scapix/java_api/javax/management/relation/RoleInfo.h>
#include <scapix/java_api/javax/management/relation/RoleList.h>
#include <scapix/java_api/javax/management/relation/RoleResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::relation::RelationService : public jni::object_base<"javax/management/relation/RelationService",
	javax::management::NotificationBroadcasterSupport,
	javax::management::relation::RelationServiceMBean,
	javax::management::MBeanRegistration,
	javax::management::NotificationListener>
{
public:

	static jni::ref<javax::management::relation::RelationService> new_object(jboolean p1) { return base_::new_object(p1); }
	void isActive() { return call_method<"isActive", void>(); }
	jni::ref<javax::management::ObjectName> preRegister(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"preRegister", jni::ref<javax::management::ObjectName>>(p1, p2); }
	void postRegister(jni::ref<java::lang::Boolean> p1) { return call_method<"postRegister", void>(p1); }
	void preDeregister() { return call_method<"preDeregister", void>(); }
	void postDeregister() { return call_method<"postDeregister", void>(); }
	jboolean getPurgeFlag() { return call_method<"getPurgeFlag", jboolean>(); }
	void setPurgeFlag(jboolean p1) { return call_method<"setPurgeFlag", void>(p1); }
	void createRelationType(jni::ref<java::lang::String> p1, jni::ref<jni::array<javax::management::relation::RoleInfo>> p2) { return call_method<"createRelationType", void>(p1, p2); }
	void addRelationType(jni::ref<javax::management::relation::RelationType> p1) { return call_method<"addRelationType", void>(p1); }
	jni::ref<java::util::List> getAllRelationTypeNames() { return call_method<"getAllRelationTypeNames", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getRoleInfos(jni::ref<java::lang::String> p1) { return call_method<"getRoleInfos", jni::ref<java::util::List>>(p1); }
	jni::ref<javax::management::relation::RoleInfo> getRoleInfo(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getRoleInfo", jni::ref<javax::management::relation::RoleInfo>>(p1, p2); }
	void removeRelationType(jni::ref<java::lang::String> p1) { return call_method<"removeRelationType", void>(p1); }
	void createRelation(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<javax::management::relation::RoleList> p3) { return call_method<"createRelation", void>(p1, p2, p3); }
	void addRelation(jni::ref<javax::management::ObjectName> p1) { return call_method<"addRelation", void>(p1); }
	jni::ref<javax::management::ObjectName> isRelationMBean(jni::ref<java::lang::String> p1) { return call_method<"isRelationMBean", jni::ref<javax::management::ObjectName>>(p1); }
	jni::ref<java::lang::String> isRelation(jni::ref<javax::management::ObjectName> p1) { return call_method<"isRelation", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::Boolean> hasRelation(jni::ref<java::lang::String> p1) { return call_method<"hasRelation", jni::ref<java::lang::Boolean>>(p1); }
	jni::ref<java::util::List> getAllRelationIds() { return call_method<"getAllRelationIds", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::Integer> checkRoleReading(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"checkRoleReading", jni::ref<java::lang::Integer>>(p1, p2); }
	jni::ref<java::lang::Integer> checkRoleWriting(jni::ref<javax::management::relation::Role> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Boolean> p3) { return call_method<"checkRoleWriting", jni::ref<java::lang::Integer>>(p1, p2, p3); }
	void sendRelationCreationNotification(jni::ref<java::lang::String> p1) { return call_method<"sendRelationCreationNotification", void>(p1); }
	void sendRoleUpdateNotification(jni::ref<java::lang::String> p1, jni::ref<javax::management::relation::Role> p2, jni::ref<java::util::List> p3) { return call_method<"sendRoleUpdateNotification", void>(p1, p2, p3); }
	void sendRelationRemovalNotification(jni::ref<java::lang::String> p1, jni::ref<java::util::List> p2) { return call_method<"sendRelationRemovalNotification", void>(p1, p2); }
	void updateRoleMap(jni::ref<java::lang::String> p1, jni::ref<javax::management::relation::Role> p2, jni::ref<java::util::List> p3) { return call_method<"updateRoleMap", void>(p1, p2, p3); }
	void removeRelation(jni::ref<java::lang::String> p1) { return call_method<"removeRelation", void>(p1); }
	void purgeRelations() { return call_method<"purgeRelations", void>(); }
	jni::ref<java::util::Map> findReferencingRelations(jni::ref<javax::management::ObjectName> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"findReferencingRelations", jni::ref<java::util::Map>>(p1, p2, p3); }
	jni::ref<java::util::Map> findAssociatedMBeans(jni::ref<javax::management::ObjectName> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"findAssociatedMBeans", jni::ref<java::util::Map>>(p1, p2, p3); }
	jni::ref<java::util::List> findRelationsOfType(jni::ref<java::lang::String> p1) { return call_method<"findRelationsOfType", jni::ref<java::util::List>>(p1); }
	jni::ref<java::util::List> getRole(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getRole", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<javax::management::relation::RoleResult> getRoles(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"getRoles", jni::ref<javax::management::relation::RoleResult>>(p1, p2); }
	jni::ref<javax::management::relation::RoleResult> getAllRoles(jni::ref<java::lang::String> p1) { return call_method<"getAllRoles", jni::ref<javax::management::relation::RoleResult>>(p1); }
	jni::ref<java::lang::Integer> getRoleCardinality(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getRoleCardinality", jni::ref<java::lang::Integer>>(p1, p2); }
	void setRole(jni::ref<java::lang::String> p1, jni::ref<javax::management::relation::Role> p2) { return call_method<"setRole", void>(p1, p2); }
	jni::ref<javax::management::relation::RoleResult> setRoles(jni::ref<java::lang::String> p1, jni::ref<javax::management::relation::RoleList> p2) { return call_method<"setRoles", jni::ref<javax::management::relation::RoleResult>>(p1, p2); }
	jni::ref<java::util::Map> getReferencedMBeans(jni::ref<java::lang::String> p1) { return call_method<"getReferencedMBeans", jni::ref<java::util::Map>>(p1); }
	jni::ref<java::lang::String> getRelationTypeName(jni::ref<java::lang::String> p1) { return call_method<"getRelationTypeName", jni::ref<java::lang::String>>(p1); }
	void handleNotification(jni::ref<javax::management::Notification> p1, jni::ref<java::lang::Object> p2) { return call_method<"handleNotification", void>(p1, p2); }
	jni::ref<jni::array<javax::management::MBeanNotificationInfo>> getNotificationInfo() { return call_method<"getNotificationInfo", jni::ref<jni::array<javax::management::MBeanNotificationInfo>>>(); }

protected:

	RelationService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_RELATIONSERVICE
