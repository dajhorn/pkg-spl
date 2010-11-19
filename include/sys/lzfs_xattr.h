#ifndef _LZFS_XATTR_H
#define _LZFS_XATTR_H

extern struct xattr_handler *lzfs_xattr_handlers[];

ssize_t
lzfs_listxattr(struct dentry *dentry, char *buffer, size_t size);

extern struct xattr_handler lzfs_xattr_user_handler;

extern struct xattr_handler lzfs_xattr_security_handler;

int
lzfs_xattr_get(struct inode *inode, const char *name,
                    void *buffer, size_t size, int);
int
lzfs_removexattr(struct dentry *dentry, const char *name);

int
lzfs_init_security(struct inode *inode, struct inode *dir);
#endif /* _LZFS_XATTR_H */

