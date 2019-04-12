
    if(u_radiance_envmap)
    {
        vec3 env;
        if(u_refraction)
            env = ibl_refract(fragment.view, fragment.normal, matlit.refraction, env_brdf_miplevel(material));
        else
            env = ibl_reflect(fragment.view, fragment.normal, env_brdf_miplevel(material));
        
        //env *= zone.radiance * zone.energy;
        //env_blend_op(material, env, diffuse, 1.0);
        env_blend_op(matphong, env, diffuse, 0.5);
        env_blend_op(matphong, env, specular, 0.5);
    }
