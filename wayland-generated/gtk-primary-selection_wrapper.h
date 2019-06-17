/*
 * AUTOGENERATED - DO NOT EDIT
 *
 * This file is generated from gtk-primary-selection.xml
 * To regenerate, run the “refresh-wayland-wrapper” target.
 */

#ifndef MIR_FRONTEND_WAYLAND_GTK_PRIMARY_SELECTION_XML_WRAPPER
#define MIR_FRONTEND_WAYLAND_GTK_PRIMARY_SELECTION_XML_WRAPPER

#include <experimental/optional>

#include "mir/fd.h"
#include <wayland-server-core.h>

namespace mir
{
namespace wayland
{

class GtkPrimarySelectionDeviceManager
{
public:
    static char const constexpr* interface_name = "gtk_primary_selection_device_manager";
    static int const interface_version = 1;

    static GtkPrimarySelectionDeviceManager* from(struct wl_resource*);

    GtkPrimarySelectionDeviceManager(struct wl_resource* resource);
    virtual ~GtkPrimarySelectionDeviceManager() = default;

    void destroy_wayland_object() const;

    struct wl_client* const client;
    struct wl_resource* const resource;

    struct Thunks;

    static bool is_instance(wl_resource* resource);

    class Global
    {
    public:
        Global(wl_display* display, uint32_t max_version);
        virtual ~Global();

        wl_global* const global;
        uint32_t const max_version;

    private:
        virtual void bind(wl_resource* new_gtk_primary_selection_device_manager) = 0;
        friend GtkPrimarySelectionDeviceManager::Thunks;
    };

private:
    virtual void create_source(struct wl_resource* id) = 0;
    virtual void get_device(struct wl_resource* id, struct wl_resource* seat) = 0;
    virtual void destroy() = 0;
};

class GtkPrimarySelectionDevice
{
public:
    static char const constexpr* interface_name = "gtk_primary_selection_device";
    static int const interface_version = 1;

    static GtkPrimarySelectionDevice* from(struct wl_resource*);

    GtkPrimarySelectionDevice(struct wl_resource* resource);
    virtual ~GtkPrimarySelectionDevice() = default;

    void send_data_offer_event(struct wl_resource* offer) const;
    void send_selection_event(std::experimental::optional<struct wl_resource*> const& id) const;

    void destroy_wayland_object() const;

    struct wl_client* const client;
    struct wl_resource* const resource;

    struct Opcode
    {
        static uint32_t const data_offer = 0;
        static uint32_t const selection = 1;
    };

    struct Thunks;

    static bool is_instance(wl_resource* resource);

private:
    virtual void set_selection(std::experimental::optional<struct wl_resource*> const& source, uint32_t serial) = 0;
    virtual void destroy() = 0;
};

class GtkPrimarySelectionOffer
{
public:
    static char const constexpr* interface_name = "gtk_primary_selection_offer";
    static int const interface_version = 1;

    static GtkPrimarySelectionOffer* from(struct wl_resource*);

    GtkPrimarySelectionOffer(struct wl_resource* resource);
    virtual ~GtkPrimarySelectionOffer() = default;

    void send_offer_event(std::string const& mime_type) const;

    void destroy_wayland_object() const;

    struct wl_client* const client;
    struct wl_resource* const resource;

    struct Opcode
    {
        static uint32_t const offer = 0;
    };

    struct Thunks;

    static bool is_instance(wl_resource* resource);

private:
    virtual void receive(std::string const& mime_type, mir::Fd fd) = 0;
    virtual void destroy() = 0;
};

class GtkPrimarySelectionSource
{
public:
    static char const constexpr* interface_name = "gtk_primary_selection_source";
    static int const interface_version = 1;

    static GtkPrimarySelectionSource* from(struct wl_resource*);

    GtkPrimarySelectionSource(struct wl_resource* resource);
    virtual ~GtkPrimarySelectionSource() = default;

    void send_send_event(std::string const& mime_type, mir::Fd fd) const;
    void send_cancelled_event() const;

    void destroy_wayland_object() const;

    struct wl_client* const client;
    struct wl_resource* const resource;

    struct Opcode
    {
        static uint32_t const send = 0;
        static uint32_t const cancelled = 1;
    };

    struct Thunks;

    static bool is_instance(wl_resource* resource);

private:
    virtual void offer(std::string const& mime_type) = 0;
    virtual void destroy() = 0;
};

}
}

#endif // MIR_FRONTEND_WAYLAND_GTK_PRIMARY_SELECTION_XML_WRAPPER
